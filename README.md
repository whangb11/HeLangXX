# HeLangXX
原作 [kifuan/helang](https://github.com/kifuan/helang)  

何语言在c++中的尝试性实现  

因为个人技术原因无法完全重现 __St.何__ 的精美代码，只能作部分还原  

# 概述
> 试试c++？  
> 
> [——《u8：一次赛博调查》](https://cultist.huijiwiki.com/wiki/%E6%96%87%E7%AB%A0)  


本工程使用会自己打字的5G键盘，花费约 \(1/1*4*51-4\) 分钟完成。  

实在是太酷了，很符合我对未来生活的想象，科技并带着趣味。  

# 使用方法
1. 下载代码  
```
>git clone https://https://github.com/whangb11/HeLangXX
```

2. 包含头文件  
```
#include"HeXX.hpp"
```

3. 使用CyberSpace命名空间  
```
using namespace CyberSpace;
```  
不过伟大的 __St.何__ 也允许这样使用CyberSpace命名空间  
```
CyberSpace::u8<int> a;
```
# 简单的教程
1. 定义一个对象  
> __St.何__ 说，要有u8，就有了u8。  
> ——《赛博经·初始化 1 : 3》  

赛博空间是包容且多变的，因此c++中的u8是泛型容器，实例化一个u8如下：  

```
CyberSpace::u8<int> aU8Object;
```  

u8也支持列表初始化  

```
CyberSpace::u8<int> anotherU8Object1={1,1,4,5,1,4};
//1 | 1 | 4 | 5 | 1 | 4
```
一个使用类型推导初始化的u8
```
auto autoU8Object = anotherU8Object1 | 1919 | 810;
//u8<int>1 | 1 | 4 | 5 | 1 | 4 | 1919 | 810
```  
>都什么年代了还在使用传统数组

不难看出，u8的元素使用 | 按位或符号分割——这是 __St.何__ 的决定  
以下初始化方式也是可行的  

```
CyberSpace::u8<int> anotherU8Object2(3);
// 0 | 0 | 0 

CyberSpace::u8<int> anotherU8Object3(3,13);
// 13 | 13 | 13
```  

2. 访问u8的内容  
u8允许下标访问  
```
anotherU8Object1[3];
//4
```  
因为作者尚未进行赛博大脑升级，所以，以u8为索引的下标访问暂未实现，同理，迭代器也尚未实现,因此u8暂不支持遍历for  
不过可以通过`powerCon()`成员函数实现批量修改元素
```
u8<size_t> filler = { 1 };
u8<uint32_t> keys(104);
keys.powerCon(filler | 2ull | 6ull | 7ull | 11ull | 52ull | 57ull | 58ull | 65ull, 10);
```
欲输出u8， 可`std::cout<<anotherU8Object1`  

3. 操作u8  
u8允许进行四则运算，只要它的元素支持这些运算
```
CyberSpace::u8<int> anotherU8Object4(3,4);
// 4 | 4 | 4 
anotherU8Object4 = anotherU8Object4 + 1;
// 5 | 5 | 5
anotherU8Object4 = anotherU8Object4 - 2;
//3 | 3 | 3
anotherU8Object4 = anotherU8Object4 * 2;
//6 | 6 | 6
anotherU8Object4 = anotherU8Object4 / 3;
//2 | 2 | 2
CyberSpace::u8<std::string> strU8(3);
//"" | "" | "" 
strU8 = strU8 + "Hello CyberSpace"
//"Hello CyberSpace" | "Hello CyberSpace" | "Hello CyberSpace"
```
u8也可以与u8相乘，此时u8会作为向量进行操作。
```
using namespace CyberSpace;
u8<int> U8a(1,5);  //1!5!
//5
u8<int> U8b(3,3);
//3 | 3 | 3
auto U8c = U8a * U8b;
//15 | 0 | 0
```
可以使用`push_back()`成员函数向u8尾部添加元素  
也可以使用`size()`成员函数获取u8的长度  
```
auto U8c = U8b | 8;
//5 | 8
U8c.push_back(11);
//5 | 8 | 11
U8c.size();
//3
```
其它操作尚处在赛博空间中，人类暂时无法使用。
# 总结

1. 关注[永雏塔菲](https://space.bilibili.com/1265680561)喵，关注永雏塔菲谢谢喵。

2. 关注[猫雷NyaRu_Official](https://space.bilibili.com/697091119)谢谢喵，要吃中国的大米喵。

3. 关注[星瞳_Official](https://space.bilibili.com/401315430)送溜溜梅！

4. 关注[嘉然](https://space.bilibili.com/672328094)，顿顿解馋！ 

5. 关注[向晚](https://space.bilibili.com/672346917)，关注向晚，为时不晚！ 

6. 关注[乃琳](https://space.bilibili.com/672342685)，关注乃琳嘎，关注乃琳谢谢嘎！

7. 关注[贝拉](https://space.bilibili.com/672353429)，关注贝拉哞，关注贝拉谢谢哞！

8. 举办[東雪蓮Official](https://space.bilibili.com/1437582453/)谢谢喵，不能让立本V吃中国的大米喵。

9. 关注[粘连科技Official](https://space.bilibili.com/248582596)，薄纱何同学喵🥰

10. 关注[HiiroVTuber](https://space.bilibili.com/508963009)，不是425KG的粉色喵！

11. 关注[露早GOGO](https://space.bilibili.com/1669777785/)！关注露早汪，关注露早谢谢汪！

12. 关注[AIChannel中国绊爱](https://space.bilibili.com/484322035)！超级可爱的 Super AI 薄纱赛博丁真！

13. 关注[有栖Mana_Official](https://space.bilibili.com/3149619)，谢谢喵。

14. 关注[洛天依](https://space.bilibili.com/36081646)，比赛博丁真更像人的V家歌姬！

15. 关注[传统丁真](https://space.bilibili.com/1463028352)，什么年代了还在关注赛博丁真，不如来怀古！

16. 关注[凑阿夸](https://space.bilibili.com/375504219)和[rinco小姐](https://www.nicovideo.jp/user/45194653
)！傻气溢出的海洋（屑）女仆（洋葱）和喜欢水濑祈的可爱唱见 期待木口回旋捏 另外请支持阿夸主演的[galgame](https://shop.hololivepro.com/products/aquarium_hololive_official_edition)谢谢！

17. 关注[原神](https://space.bilibili.com/401742377)，玩《原神》比看赛博丁真好多了！

18. 关注[唐九夏还想再躺一下](https://space.bilibili.com/1219196749)，谢谢爹!

19. 关注[吉诺儿kino](https://space.bilibili.com/1383815813)，守护全世界最抽象的吉芭公主！

20. 关注[卡缇娅也不知道鸭](https://space.bilibili.com/1011797664)，谢谢鸭！

21. 关注[灯瑠hiru](https://space.bilibili.com/1848290057)，这些技术她都看不懂，可是她的锯齿牙真的好可爱呀，
一整个爱住，啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊！

22. 关注[阿梓从小就很可爱](https://space.bilibili.com/7706705)，太破费了吧，红豆泥阿里嘎多！

23. 关注[柯洁](https://space.bilibili.com/525952604)，都什么年代，还在下传统围棋？

24. 关注[米诺高分少女](https://space.bilibili.com/1778026586)，么么哒米诺！

25. 关注[电棍otto](https://space.bilibili.com/628845081)，年仅三岁的国王毫无畏惧！

26. 关注[fly组合](https://space.bilibili.com/22720137)靴靴，我阴会给你很多的很好的评价！
