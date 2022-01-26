
#%%
import os
import pandas as pd
import numpy as np


working_directory=os.getcwd()
print(working_directory)

path_train=working_directory+'/train.csv'
path_test=working_directory+'/test.csv'
path_submit=working_directory+'/submit.csv'
train=pd.read_csv(path_train)
test=pd.read_csv(path_test)
submit=pd.read_csv(path_submit)

train.head()
# %%
