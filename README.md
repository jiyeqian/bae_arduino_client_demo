## 功能
[Arduino][arduino]物联网开源平台与百度BAE开放云平台对接。结合[Arduino][arduino]的优势，将Arduino开源平台对物理环境信息的采集功能与传统互联网云平台如[百度BAE开放云台](bae)打通对接，从而实现将海量的真实物理信息世界人们真实生活环境的数据能够存储到百度开放云平台中进行分析以及处理。将Arduino uno板子连上ethernet shield模块，示例代码是让arudino网络模块硬件以发送http url的请求方式连入自己在百度BAE云开放平台中创建的服务器，并将数据参数传入云服务器中。这样BAE服务器就可以随时接收处理来自Arduino采集的各种物理环境信息，也可以以同样方式将云服务中的数据同样以http请求的方式将数据接收到Arduino底层硬件中对真实环境进行控制。

## 简介
Arduino，是一个基于开放原始码的软硬体平台，构建于开放原始码simple I/O介面版，并且具有使用类似Java，C语言的Processing/Wiring开发环境。

Arduino能通过各种各样的传感器来感知环境，通过控制灯光、马达和其他的装置来反馈、影响环境。板子上的微控制器可以通过Arduino的编程语言来编写程序，编译成二进制文件，烧录进微控制器。对Arduino的编程是利用 Arduino编程语言（基于 Wiring）和Arduino开发环境（based on Processing）来实现的。基于Arduino的项目，可以只包含Arduino，也可以包含Arduino和其他一些在PC上运行的软件，他们之间进行通信 (比如 Flash, Processing, MaxMSP)来实现。
  
正因为arudino拥有这些优势，再加上它是一款开源项目，所以越来越多的人开始使用它。而传统互联网中，人们大多是通过网页的一些技术手段获取用户的一些搜索习惯和上网习惯的信息，进而进行数据挖掘对公司的战略以及发展做出决策。而现实生活中人们的一些生活习惯或者物理举动，通常由于技术原因很难对这些信息进行抓取。
	
Arduino开源硬件平台已经有越来越多的极客已经将其与新浪SAE或者其他云平台进行对接打通。而百度BAE由于出来时间较短，还暂时没有发现有人涉及到这一块，然而百度BAE云服务，相当大一个优势就是对海量数据的存储以及个人数据的存储，以及挖掘处理。所以打通Arduino与BAE真实物理世界与互联网世界这两大平台也非常地有必要。

由于Arduino是开源硬件项目，因此其底层硬件驱动函数大多由其他开发者用c或者c++实现，只需要调用其IDE环境中的SDK即可使用。


[arduino]: http://www.arduino.cc "Arduino"     
[bae]: http://developer.baidu.com/wiki/index.php?title=docs/cplat/rt "百度应用引擎(BAE)"  
