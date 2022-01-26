#!/usr/bin/env python
# coding: utf-8

# In[7]:


print(1+3)


# In[8]:


print('hello,world')


# # こんにちは

# ## こんにちは

# In[9]:


# comment out
1+2


# In[2]:


class Student5:

    def __init__(self,name):
        self.name = name

    def calculateAvg(self,data):
        sum =0

        for num in data:
            sum+=num

        avg=sum/len(data) #lenはdataのリストの要素数を算出
        return avg

    def judge(self,avg):
        if avg >60:
            result="Congratulations!"
        else:
            result="Make more effort"
        return result

d001=Student5("tamai")
data=[70,40,80,60,90]
avg=d001.calculateAvg(data)
result=d001.judge(avg)
print(d001.name+" : "+result)


# In[ ]:


Student5


# In[ ]:





# In[ ]:





# In[ ]:





# In[ ]:




