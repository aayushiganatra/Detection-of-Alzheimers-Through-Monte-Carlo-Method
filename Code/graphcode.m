//After MCMC AGE CODE

import matplotlib.pyplot as plt
x1 = [65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80]
y1 = [0.187, 0.186, 0.196, 0.207, 0.195, 0.202, 0.205, 0.212, 0.311, 0.344, 0.4677, 0.7254, 0.7909, 0.8468, 0.8753,1]
y2 = [0.190,0.200,0.202,0.202,0.212,0.216,0.279,0.300,0.318,0.388,0.397,0.406,0.628,0.677,0.700,0.822]
# Markers: https://matplotlib.org/api/markers_api.html


plt.scatter(x1,y1,color = 'b', label = 'Before MCMC Process')
plt.scatter(x1,y2,color = 'r',label = 'After MCMC Process')

plt.xlabel('Age')
plt.ylabel('Probability') 
plt.title('Death Rate per 1000 people by age')
plt.legend()
plt.show()

//After MCMC Year Code

import matplotlib.pyplot as plt
x1 = [2000,2001,2002,2003,2004,2005,2006,2007,2008,2009,2010,2011,2012,2013,2014,2015]
y1 = [0.176,0.189,0.205,0.219,0.225,0.242,0.243,0.248,0.271,0.258,0.270,0.273,0.266,0.268,0.293,0.344]
y2 = [0.174,0.179,0.189,0.196,0.205,0.210,0.218,0.223,0.235,0.240,0.245,0.250,0.259,0.259,0.265,0.279]
# Markers: https://matplotlib.org/api/markers_api.html


plt.scatter(x1,y1, color = 'b', label = 'Before MCMC Process')
plt.scatter(x1,y2, color = 'r', label = 'After MCMC Process')

plt.xlabel('YEARS')
plt.ylabel('Probability') 
plt.title('Death Rate per 1000 people over years')
plt.legend()
plt.show()

//MMSE Probability Graph


import matplotlib.pyplot as plt
x1 = [24,25,26,30]
y1 = [0.25,0.28155,0.29402,0.299832]
y2 = [0.75,0.470725,0.380063,0.343249]
y3 = [0,0.325525,0.360602,0.348498]
y4 = [0,0.0062,0.03008,0.0450358]
# Markers: https://matplotlib.org/api/markers_api.html


plt.scatter(x1,y1,color = 'b', label = 'MMSE<24')
plt.scatter(x1,y2,color = 'r', label = 'MMSE<=24')
plt.scatter(x1,y3,color = 'g', label = 'MMSE=26')
plt.scatter(x1,y4,color = 'y', label = 'MMSE>=26')

plt.xlabel('MMSE')
plt.ylabel('Probability') 
cdict = {0: 'blue', 1: 'red', 2: 'green', 3:'yellow'}
plt.title('Probability Distriution of MMSE')

//DeathRate by Age

import matplotlib.pyplot as plt
x1 = [65,66,67,68,69,70,71,72,73,74,75,76,78,79,80,81]
y1 = [0.0294,0.0656,0.0045,0.0005,0.0000,0.1396, 0.1472, 0.1577, 0.1641, 0.1685,0.6677, 0.7254, 0.7909, 0.8468, 0.8753,1.0000]
# Markers: https://matplotlib.org/api/markers_api.html


plt.scatter(x1,y1)

plt.xlabel('AGE')
plt.ylabel('Death Rate') 

plt.title('U.S. Annual Alzheimer’s Death Rate (per 100,000 People) by Age')
plt.show()
plt.legend()
plt.show()