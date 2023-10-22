# 这回是真·一行(xíng)代码写的猜数字游戏
#                                  ^^^^ P.S.:营销号常用语音合成软件读错的声音      

exec ('print(\"来玩个猜数字游戏吧，\",end=\"\");(s:=eval(\"__import__(\'random\').randint(1,100)\"))==0;g=lambda x: eval (\"(print (exit(\'你猜对了\')if (a:=eval(input(\'输入1到100之间的数 \')))==(s) else \'大了\' if a>s else \'小了\'  ) )\")+g(0);g(0) ')