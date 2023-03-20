### HTTP
#### HTTP 常见面试题

<div align="left"><img width="500" src="images/2023-03-20-21-32-52.png"/></div>

##### 1. HTTP 基本概念
- 超文本传输协议
- 常见状态码
  - 2xx 成功
  - 3xx 重定向
  - 4xx 客户端错误，请求报文有误
  - 5xx 服务器错误
- 常见字段
  - Host字段
  - Content-Length 字段
  - Connectin 字段
  
##### 2. GET与POST
- GET 方法是安全且幂等的，因为它是**只读**操作
- POST 方法是不安全，不幂等的，因为是**新增或提交数据**

##### HTTP 缓存技术
强制缓存和协商缓存技术

##### HTTP 特性
1. 优点：简单，灵活可扩展
2. 缺点：无状态（可解决方案：Cookie技术），明文传输（可解决方案：使用HPPTS，也就是通过引入SSL/TLS层保障信息安全）


   
