# LINUX多线程

一、Linux线程概念

【1】在一个程序里的执行路线就叫做线程（thread）。更准确的定义是：线程是一个内部进程的控制序列。

【2】一切进程至少都有一个执行线程。

【3】线程在进程内部运行，本质是在进程地址空间内运行。

【4】在linux系统中，在CPU眼中，看到的PCB都要比传统的进程更加轻量化。

【5】透过进程虚拟地址空间，可以看到进程的大部分资源，将进程资源合理分配给每个执行流，就形成了线程执行流

二、线程的优点

【1】创建一个新线程的代价要比创建一个新进程小得多

【2】与进程之间的切换相比，线程之间的切换需要操作系统做的工作要少很多

【3】线程占用的资源要比进程少很多

【4】能充分利用多处理器的可并行数量

【5】在等待慢速I/O操作结束的同时，程序可执行其他的计算任务

【6】计算密集型应用，为了能在多处理器系统上运行，将计算分解到多个线程中实现

【7】I/O密集型应用，为了提高性能，将I/O操作重叠。线程可以同时等待不同的I/O操作

三、线程的缺点

【1】性能损失：一个很少被外部事件阻塞的计算密集型线程往往无法与其它线程共享同一个处理器。如果计算密集型线程的数量比可用的处理器多，那么可能会有较大的性能损失，这里的性能损失值得是增加了额外的同步和调度开销，而可用的资源不变。

【2】健壮性降低：编写多线程需要更全面更深入的考虑，在一个多线程里，因时间分配上的细微偏差或者因共享不该共享的变量而造成不良影响的可能性是很大的，换句话说线程之间是缺乏保护的

【3】缺乏访问控制：进程是访问控制基本粒度，在一个线程中调用某些OS函数会对整个进程造成影响

【4】编程难度提高：编写与调试一个多线程比单线程程序困难很多 

四、线程异常

【1】单个线程如果出现除零，野指针问题导致线程崩溃，进程也会随着崩溃

【2】线程是进程的执行分支，线程出现异常，就类似进程出现异常，进而触发信号机制，终止进程，进程终止，该进程内的所有线程也就随即退出。

五、线程用途

【1】合理的使用多线程，能提高CPU密集型程序的执行效率

【2】合理的使用多线程，能提高IO密集型程序的用户体验

六、进程和线程

【1】进程是资源分配的基本单位；线程是调度的基本单位；线程共享进程数据，但也拥有自己的一部分数据：线程ID、一组寄存器、栈、errno、信号屏蔽字、调度优先级。

【2】进程的多个线程共享同一地址空间，因此Text Segment、Data Segment都是共享的，如果定义一个函数，在各线程中都可以调用，如果定义一个全局变量，在各线程中都可以访问到，除此之外，各线程还共享以下进程资源和环境：文件描述符表、每种信号的处理方式（SIG_IGN、SIG_DFL或者自定义的信号处理函数）当前工作目录、用户ID和组ID

七、POSIX线程库

1.与线程有关的函数构成了一个完整的系列，绝大多数函数的名字都是以“Pthread_”开头的

2.要使用这些函数库，要通过引入头文件<pthread.h>

3.链接这些线程函数库时要使用编译器命令的“-lpthread”选项

【1】创建线程

功能：创建一个新的线程

原型：int pthread_create(pthread_t *thread,const pthread_attr_t *attr,void *(*start_routine)(void*),void *arg);

参数：

​		thread：返回线程ID

​		attr：设置线程的属性，attr为NULL表示使用默认属性r

​		start_routine：是个函数地址，线程启动后要执行的函数

​		arg：传给线程启动函数的参数

返回值：成功返回0，失败返回错误码

【2】错误检查：

1.传统的一些函数是，成功返回0，失败返回-1，并且对全局变量errno赋值以指示错误

2.pthreads函数出错时不会设置全局变量errno（而大部分其他POSIX函数会这样做）。而是将错误代码通过返回值返回。

3.pthreads同样也提供了线程内的errno变量，以支持其他使用errno的代码。对于pthreads函数的错误，建议通过返回值来判定，因为读取返回值要比读取线程内的errno变量开销小。

【3】进程ID和线程ID

1.在Linux中，目前的线程实现是Native POSIX Thread Libaray简称NPTL。在这种实现下，线程又被称为轻量级进程（Light Weighted Process），每一个用户态的线程，在内核中都对应一个调度实体，也拥有自己的进程描述符（task_struct结构体）

2.没有线程之前，一个进程对应内核里的一个进程描述符，对应一个进程ID。但是引入线程概念之后，情况发生了变化，一个用户进程下管辖N个用户态线程，每个线程作为一个独立的调度实体在内核态都有自己的进程描述符，进程和内核的描述符一下子就变成了1：N关系。POSIX标准又要求进程内的所有线程调用getpid函数时返回相同的进程ID，如何解决上述问题呢？ Linux内核引入了线程组的概念。

3.多线程的进程，又被称为线程组，线程组内的每一个线程在内核中都有一个进程描述符 ，与之对应。进程描述符结构体中的pid，表面上看对应的是进程ID，其实不然，它对应的线程ID，进程描述符中的tgid，含义是Thread Group ID，该值对应的是用户层面的进程ID

现在介绍的线程ID，不同于pthread_t类型的线程ID，和进程ID一样，线程ID是pid_t类型的变量，而且是用来唯一标识线程的一个整形变量。

ps命令中的-L选项，会显示如下信息：

LWP：线程ID，即gettid()系统调用的返回值。、

NLWP：线程组内线程的个数

Linux提供了gettid系统调用来返回其线程ID，可是glibc并没有将该系统调用封装起来，在开放接口来供程序员使用。如果确实需要获得线程ID，可以采用如下方法： #include<sys/syscall.h> pid_t pid;tid = syscall(SYS_gettid)

a.out的进程ID为28546，下面有一个线程的ID也是28546，这不是巧合。线程组内的第一个线程，在用户态被称为主线程（main thread），在内核中被称为group leader，内核在创建第一个线程的时候，会将线程组的ID值设置成第一个线程的线程ID，group leader指针则指向自身，即主线程的进程描述符。所以线程组内存在一个线程ID等于进程ID，而该线程组的主线程。

线程组ID等于线程ID，group leader指向自身

p->tgid = p->pid；

p->group_leader = p;

INIT_LIST_HEAD（&p->thread_group）;

至于线程组其他线程的ID则有内核负责分配，其线程ID总是和主线程的线程组ID一致，无论是主线程直接创建线程，还是创建出来的线程再次创建线程，都是这样。

```c++
if(clone_flags & CLONE_THREAD)
	p->tgid = current->tgid;
if(clone_flags & CLONE_THREAD){
	P->group_lead = current->group_leader;
	list_add_tail_rcu(&p->thread_group,&p->group_leader->thread_group)
}
```

~强调一点，线程和进程不一样，进程有父进程的概念，但在线程组里面，所有的线程都是对等的关系

八、线程ID及进程地址空间布局

【1】pthread_create函数会产生一个线程ID，存放在第一个参数指向的地址中，该线程ID和前面说的线程ID不是一回事。

【2】前面讲的线程ID属于进程调度的范畴。因为线程是轻量级进程，是操作系统调度器的最小单位，所以需要一个数值来表示该线程。

【3】pthread_create函数第一个参数指向一个虚拟内存单元，该内存单元的地址即为新创建线程的线程ID，属于NPTL线程库的范畴。线程库的后续操作，就是根据该线程ID来操作线程的。

【4】线程库NPTL提供了pthread_helf函数，可以获得线程自身的ID：

```
pthread_t pthread_self(void)
```

九、线程终止

如果需要只终止某个线程而不终止整个进程，可以有三种方法：

【1】从线程函数return。这种方法对主线程不适用，从main函数return相当于调用exit

【2】线程可以调用pthread_exit终止自己。

【3】一个线程可以调用pthread_cancel终止同一进程中的另一个线程

【4】pthread_exit函数

1.功能：线程终止

原型：

​		void pthread_exit(void *valuptr);

参数：

​		value_ptr:value_ptr 不要指向一个局部变量。

返回值：无返回值，跟进程一样，线程结束的时候无法返回到它的调用者（自身

需要注意的，pthread_exit或者return返回的指针所指向的内存单元必须是全局的或者是用malloc分配的，不能在线程的栈上分配，因为当其他线程得到这个返回指针时线程函数已经退出了。

【5】pthread_cancel函数

1.功能：取消一个执行中的线程

原型

​		int pthread_cancel(pthread_t thread);

参数

thread：线程ID

返回值：成功返回0；失败返回错误码

十、线程等待+为什么需要线程等待

【1】已经退出的线程，其空间没有被释放，仍然在进程的地址空间内。

【2】创建的线程不会复用刚才退出线程的地址空间

1.功能：等待线程结束

2.原型

​			int pthread_join（pthread_t thread,void **value_ptr）;

3.参数：

​			thread：线程ID

​			value_ptr：它指向一个指针，后者指向线程的返回值

返回值：成功返回0；失败返回错误码。

调用该函数的线程将刮起等待，直到ID为thread的线程终止。thread线程以不同的方法终止，通过pthread_join得到的终止状态是不同的，总结如下：

1.如果thread线程通过return返回，value_ptr所指向的单元里存放的是thread线程函数的返回值。

2.如果thread线程被别的线程调用pthread_canel异常终止掉，value_ptr所指向的单元里存放的是常数PTHREAD_CANCELED。

3.如果thread线程是自己调用pthread_exit终止的，value_ptr所指向的单元存放的是传给pthread_exit()的参数。

4.如果对thread线程的终止状态不感兴趣，可以传NULL给value_ptr参数

十一、分离线程

【1】默认情况下，新创建的线程是joinable的，进程退出后，需要对其进行pthread_join操作，否则无法释放资源，从而造成系统漏洞。

【2】如果不关心线程的返回值，join是一种负担，这个时候，我们可以告诉系统，当线程退出时，自动释放线程资源。

```c
int pthread_detach(pthread_t thread)
```

可以是线程组内其他线程对目标线程进行分离，也可以是线程之间分离：

pthread_detach(pthread_self());

joinable和分离是冲突的，一个线程不能既是joinable又是分离的。

十二、Linux线程互斥

【1】进程线程间的互斥相关背景概念

1.临界资源：多线程执行流共享的资源就叫做临界资源

2.临界区：每个线程内部，访问临界自娱的代码，就叫做临界区

3.互斥：任何时刻，互斥保证有且只有一个执行流进入临界区，访问临界资源，通常对临界资源进行保护。

4.原子性（后面讨论如何实现）：不会被任何调度机制打断的操作

【2】互斥量mutex

1.大部分情况，线程使用的数据都是局部变量，变量的地址空间在线程栈空间内，这种情况，变量归属单个线程，其他线程无法获得这种变量。

2.但有时候，很多变量都需要在线程间共享，这样的变量称为共享变量，可以通过 数据的共享，完成线程	之间的交互。

3.多个线程并发的操作共享变量，会带来一些问题。

为什么困难无法获得争取结果？

1.if 语句判断条件为真以后，代码可以并发的切换到其他线程

2.usleep这个模拟漫长业务的过程，在这个漫长的业务过程中，可能有多个线程会进入代码段。

3.ticket操作本身就不是一个原子操作，而是对应三条汇编指令

1.load：将共享变量ticket从内存加载到寄存器中

2.update：更新寄存器里面的值，执行-1操作

3.store：将新值，从寄存器写回共享变量ticket的内存地址

要解决以上问题要解决以上问题，需要做到三点：

1.代码必须要有互斥行为：当代码进入临界区执行时，不允许其他线程进入该临界区。

2.如果多个线程同时要求执行临界区的代码，并且；临界区没有线程在执行，那么只能允许一个线程进入该临界区。

如果线程不在临界区中执行，那么该线程不能阻止其他线程进入临界区。

十三、互斥量的接口

初始化互斥量的两种方法：

方法1，静态分配：

```
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER
```

方法2，动态分配：

```
int pthread_mutex_init(pthread_mutex_t *restrict mutex,const pthread_mutexattr_t *restrict attr);
参数：
	mutex：要初始化的互斥量。
	attr：NULL
```

销毁互斥量

1.使用PTHREAD_MUTEX_INITIALIZER初始化的互斥量不需要销毁。

2.不要销毁一个已经加锁的互斥量

3.已经销毁的互斥量，要确保后面不会有线程再尝试加锁。

```c
int pthread_mutex_destroy(pthread_mutex_t *mutex);
```

互斥量加锁和解锁

> ```c
> int pthread_mutex_lock(pthread_mutex_t *mutex);
> int pthread_mutex_unlock(pthread_mutex_t *mutex);
> 返回值：成功返回0，失败返回错误号
> ```

调用pthread_lock时，可能会遇到以下情况：

1.互斥量处于未锁状态，该函数会将互斥量锁定，同时返回成功

2.发起函数调用时，其他线程已经锁定互斥量，或者存在其他线程同时申请互斥量，但没有竞争到互斥量，那么pthread_lock调用会陷入阻塞（执行流被挂起），等待互斥量解锁.

该进上面的售票系统：

十四、互斥量实现原理探究

1.经过上面的例子，大家已经意识到单纯的i++或者++i都不是原子的，有可能会有数据一致性的问题。

2.为了实现互斥锁操作，大多数体系结构都提供了swap或exchange指令，该指令的作用是把寄存器和内存单元的数据交换，由于只有一条指令，保证了原子性，即使是多处理器平台，访问内存的，总线周期也有先后，一个处理器上的交换指令执行时另一个处理器的交换指令只能等待总线周期。现在我们把lock和unlock的伪代码改一下。

十五、可重入VS线程完全

【概念】：

1.线程安全：多个线程并发同一段代码时，不会出现不同的结果。常见对全局变量或者静态变量进行操作，并且没有锁保护的情况下，会出现该问题。

2.重入：同一个函数被不同的执行流调用，当前一个流程还没有执行完，就有其他的执行流再次进入，我们可称为重入。一个函数在重入的情况下，运行结果不会出现任何不同或者任何问题，则该函数被称为可重入函数，否则，是不可重入函数。

【常见的线程不安全的情况】

1.不保护共享变量的函数

2.函数状态随着被调用，状态发生变化的函数

3.返回指向静态变量指针的函数

4.调用线程不安全的函数

十六、常见的线程安全的情况

【1】每个线程对全局变量或者静态变量只有读取的权限，而没有写入的权限，一般来说这些线程是安全的。

【2】类或者接口对于线程来说都是原子操作。

【3】多个线程之间的切换导致该接口的执行结果存在二义性

十七、常见不可