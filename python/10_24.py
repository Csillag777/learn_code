import itertools

import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation

def show_plot(data_x, data_y,n):
        def data_gen():
            for cnt in range(n):
                print(data_x[cnt], data_y[cnt])
                yield data_x[cnt], data_y[cnt]
        def init():
            ax.set_ylim(0, 20)
            ax.set_xlim(0, 20)
            del xdata[:]
            del ydata[:]
            line.set_data(xdata, ydata)
            return line,
        fig, ax = plt.subplots()
        line, = ax.plot([], [], 'm*')
        ax.grid()
        xdata, ydata = [], []
        def run(data):
            # update the data
            t, y = data
            xdata.append(t)
            ydata.append(y)
            xmin, xmax = ax.get_xlim()
            if t >= xmax:
                ax.set_xlim(xmin, 2*xmax)
                ax.figure.canvas.draw()
            line.set_data(xdata, ydata)
            return line,
        def toggle_pause(self, *args, **kwargs):
            if self.paused:
                self.animation.resume()
            else:
                self.animation.pause()
            self.paused = not self.paused

        ani = animation.FuncAnimation(fig, run, data_gen, interval=1000, init_func=init)        
        plt.show()
a = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
b = [1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10]
show_plot(a,b,20)