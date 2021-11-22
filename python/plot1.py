import matplotlib.pyplot as plt
from scipy import stats
import numpy as np
years = [1000,1500,1600,1700,1750,1800,1850,
        1900,1950,1960,1965,1970,1975,1980,
        1985,1990,1995,2000,2005,
        2010,2015,2020]

pops = range(0,110,5)
deaths = range(0,22)
plt.plot(years,pops)
plt.plot(years,deaths)
plt.title("Population Growth") # title
plt.ylabel("Population in billions") # y label
plt.xlabel("Population growth by year") # x label
#plt.setp(lines,marker = "o") 
plt.grid(True)
plt.show()