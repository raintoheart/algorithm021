学习笔记
# 1.数组、链表、跳表的基本实现和特性
## 1.1.Array时间复杂度:
	- prepend O(1),注意：正常情况下，数组prepend操作的时间复杂O(n),但是可以进行特殊优化到O(1),采用的方式是申请稍大一些一些的内存空间，然后在数组最开始预留一部分空间，然后prepend的操作则是把头下标前移一个位置即可。
	- append O(1)
	- lookup O(1)
	- insert O(n)
	- delete O(n)
## 1.2.普通链表时间复杂度：
	- prepend O(1)
	- append O(1)
	- lookup O(n)
	- insert O(1)
	- delete O(1)
## 1.3.跳表：
### 1.3.1.跳表的特点：
	- 注意：<b>只能用于元素有序的情况。</b>
	- 所以，跳表（skip list）对标的是平衡树（AVL Tree）和 二分查找，是一种插入/删除/搜索/ 都是O(log n)的数据结构。1989年出现。
	- 它最大的优势是原理简单、容易实现、方便扩展、效率更高。因此在一些热门的项目里用来代替平衡树，如redis,LevelDB等。
### 1.3.2.跳表如何进行加速（升维）：
	- 添加第一级索引
	- 添加第二级索引
	- 添加第三级索引
	- ...
### 1.3.3.跳表查询的时间复杂度分析
	- n/2,n/4,n/8,...,第k级索引节点的个数就是n/(2^k)
	- 假设索引有h级，最高级的索引有2个节点，n/(2^h)=2,从而求得h=log2(n)-1
	- 例子：索引的高度:logn, 每层索引遍历的节点个数3，在跳表中查询任意数据的时间复杂度就是O(logn)
### 1.3.4.跳表的空间复杂度分析
	- 原始链表大小为n,每2个节点抽1个，每层索引的节点数：n/2,n/4,n/8,...,8,4,2
	- 原始链表的大小为n,每3个节点抽1个，每层索引的节点数：n/3,n/9,n/27,...,9,3,1
	- 空间复杂度是O(n)
## 1.4.小结
	- 数组、链表、跳表的原理和实现
	- 三者的时间复杂度、空间复杂度
	- 工程运用
	- 跳表：升维思想+空间换时间
## 1.4.参考链接：
	- [LRU缓存算法](https://www.jianshu.com/p/b1ab4a170c3c)
	- [146. LRU 缓存机制](https://leetcode-cn.com/problems/lru-cache/)
	- [为啥 Redis 使用跳表（Skip List）而不是使用 Red-Black？](https://www.zhihu.com/question/20202931)
	- [Java 源码分析（ArrayList）](http://developer.classpath.org/doc/java/util/ArrayList-source.html)
	- [Linked List 的标准实现代码](https://www.geeksforgeeks.org/implementing-a-linked-list-in-java-using-class/)
	- [Java 源码分析（LinkedList）](http://developer.classpath.org/doc/java/util/LinkedList-source.html)


# 2.栈和队列的实现与特性
## 2.1.Stach & Queue关键点
	- Stack: 先入后出；添加、删除皆为O(1)
	- Queue: 先入先出；添加、删除皆为O(1)
	- Deque(Double-End Queue):
		- 1.简单理解：两端可以进出的Queue，Deque-Double-ended queue
		- 2.插入和删除都是O(1)操作
## 2.2.Stach、Queue、Deque工程实现
	- Java、Python、C++等已有实现基础
	- 如何查询接口信息？如何使用？
		- stack:java 12 google 搜索
	- 示例代码
## 2.3.Priority Queue
	- 1.插入操作：O(1)
	- 2.取出操作：O(logN)——按照元素优先级取出
	- 3.底层具体实现的数据结构较为多样和复杂：heap、bst、treap
## 2.4.小结
	- 1.Stack、Queue、Deque 的原理和操作复杂度
	- 2.PriorityQueue 的特点和操作复杂度
	- 3.查询Stack、Queue、Deque、PriorityQueue 的系统接口的方法
## 2.5.参考链接
	- [Java 的 PriorityQueue 文档](http://docs.oracle.com/javase/10/docs/api/java/util/PriorityQueue.html)
	- [Java 的 Stack 源码](http://developer.classpath.org/doc/java/util/Stack-source.html)
	- [Java 的 Queue 源码](http://fuseyism.com/classpath/doc/java/util/Queue-source.html)
	- [Python 的 heapq](http://docs.python.org/2/library/heapq.html)
	- [高性能的 container 库](http://docs.python.org/2/library/collections.html)
