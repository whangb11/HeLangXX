# HeLangXX
原作 [kifuan/helang](https://github.com/kifuan/helang)  

何语言在c++中的尝试性实现  

因为个人技术原因无法完全重现 __St.何__ 的精美代码，只能作部分还原  

# 概述
> 试试c++？  
> 
> [——《蛾：一次赛博调查》](https://cultist.huijiwiki.com/wiki/%E6%96%87%E7%AB%A0)  


本工程使用会自己打字的5G键盘，花费 `1/1*4*51-4` 分钟完成。  

实在是太酷了，很符合我对未来生活的想象，科技并带着趣味。  

# 使用方法
1. 下载代码  
`
>git clone https://https://github.com/whangb11/HeLangXX
`

2. 包含头文件  
`
#include"HeXX.hpp"
`

3. 使用CyberSpace命名空间  
`
using namespace CyberSpace;
`  
不过伟大的 __St.何__ 也允许这样使用CyberSpace命名空间  
`
CyberSpace::u8<int> a;
`
# 简单的教程
- 定义一个对象  

赛博空间是包容且多变的，因此c++中的u8是泛型容器，实例化一个u8如下：  

`
CyberSpace::u8<int> aU8Object;
`  

u8也支持列表初始化  

`
CyberSpace::u8<int> anotherU8Object1={1,1,4,5,1,4};
//1 | 1 | 4 | 5 | 1 | 4
`  

以下初始化方式也是可行的  

`
CyberSpace::u8<int> anotherU8Object2(3)
// 0 | 0 | 0 

CyberSpace::u8<int> anotherU8Object2(3,13)
// 13 | 13 | 13
`  

- 访问u8的内容
