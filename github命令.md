# github命令

ls 拉取文件夹下文件信息

#### 返回上一级目录

```
cd .. 
```

### 上传文件流程

1. 在文件夹打开git 切换到对应路径

2. git add 文件名（多个文件可以多次提交  全部提交是add .）

3. git commit -m "Your commit message"

4. git push origin main

   ### 删除文件

   1. 在文件夹打开git 切换到对应路径
   2.  git rm 文件名
   3. git commit -m "deletecommit message"
   4. git push origin main

### 删除文件夹

​	git rm -r 文件名