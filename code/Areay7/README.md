# 四个Linux工具简化版


## wcat

示例: 在Linux终端下编译运行
```shell
gcc -o wcat wcat.c 
./wact wcat.c
# wcat.c 可以换成其他文件
```


## wgrep

示例: 在Linux终端下编译运行
```shell
gcc -o wgrep wgrep.c 
./wgrep main wgrep.c
# main  可以在该文件中提取出包含main的一行
# wgrep.c. 可以换成其他文件
```

## wzip and wunzip

示例: 在Linux终端下编译运行
```shell
gcc -o wzip wzip.c
./wzip file.txt > file.z
# 将 file.txt 压缩到 file.z 中
```

```shell
gcc -o wunzip wunzip.c
./wunzip file.z
# 将 file.z 解压,并打印到终端
```

## Linux工具介绍
### cat命令：
```console
作用： cat 命令用于连接文件并打印到标准输出（通常是终端）。它也用于创建新文件、将文本追加到已有文件、创建文本文件的副本等。
用法： cat [选项] [文件]
示例：
cat file.txt：将 file.txt 的内容打印到终端。
cat file1.txt file2.txt > merged.txt：将 file1.txt 和 file2.txt 的内容连接并保存到 merged.txt 文件中。
```

### grep命令：
```console
作用： grep 命令用于在文本文件中搜索指定的模式（正则表达式），并输出包含匹配的行。
用法： grep [选项] 模式 [文件]
示例：
grep "pattern" file.txt：在 file.txt 中搜索包含 "pattern" 的行。
grep -r "pattern" /path/to/directory：在指定目录下递归搜索包含 "pattern" 的文件。
```

### zip命令：
```console
作用： zip 命令用于将文件和目录压缩成 .zip 格式的压缩文件。
用法： zip [选项] 压缩文件名.zip [文件/目录]
示例：
zip archive.zip file1.txt file2.txt：将 file1.txt 和 file2.txt 压缩成 archive.zip。
zip -r archive.zip directory/：将 directory/ 目录及其内容压缩成 archive.zip。
```

### unzip命令：
```console
作用： unzip 命令用于解压缩 .zip 格式的压缩文件。
用法： unzip [选项] 压缩文件.zip
示例：
unzip archive.zip：解压缩 archive.zip 文件。
unzip -d /path/to/extract/ archive.zip：将 archive.zip 解压到指定目录。
```




