# xd0615
这是第一次更新：  
#0615课程笔记  
1.了解GitHub   
（1）注册GitHub账号，创建一个仓库并设置密钥  
（2）了解基本指令
cd：浏览指令     git init：初始化本地仓库  
git add：添加文件到暂存区  git commit -m：将暂存区文件提交到仓库  
git branch：创建分支  git push：将编辑好的文件上传到对应仓库中  
cat：查询文件内容  git clone：将对应仓库的文件下载到本地  
（3）关于密钥的配置
①打开Git Bash  ②运行ssh -keygen -t rsa -b 4096 -C "你的邮箱"  
③按回车三次  ④运行cat ~/.ssh/id_rsa.pub，得到一串链接，完整复制这串链接  
⑤回到GitHub设置密钥的界面，在Title输入【我的第一个key】  
⑥在key里粘贴刚刚复制的链接并点击Add SSH key  ⑦回到Git Bash并运行ssh -T git@github.com，看到提示后输入yes  
2.关于ARDUINO开源硬件的基本了解  

#关于建议：  
希望老师在一些细节多的地方能稍微讲解得细致一些