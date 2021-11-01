import tkinter as tk
from typing import Sized
from PIL import Image, ImageTk
import tkinter.font as tkFont

window = tk.Tk()
window.title('dash borad test')
window.geometry('800x600')
window.configure(background='grey')
align_mode = 'nswe'
pad = 5
fontStyle = tkFont.Font(family="Lucida Grande", size=10)

fontStyle1 = tkFont.Font(family="Lucida Grande", size=20)
div1 = tk.Label(window, text='Dash Board',bg="grey",font=fontStyle,fg='white')
div2 = tk.Button(window, text="up",bg="green",font=fontStyle)
div3 = tk.Button(window, text="down",bg="pink",font=fontStyle)
div4 = tk.Button(window, text="left",bg="orange",font=fontStyle)
div5 = tk.Button(window, text="right",bg="blue",font=fontStyle)
div1.grid(column=0, row=0, padx=pad, pady=pad,sticky=align_mode)
div2.grid(column=0, row=1, padx=pad, pady=pad, sticky=align_mode)
div3.grid(column=1, row=1, padx=pad, pady=pad, sticky=align_mode)
div4.grid(column=2, row=1, padx=pad, pady=pad, sticky=align_mode)
div5.grid(column=3, row=1, padx=pad, pady=pad, sticky=align_mode)
result_label = tk.Label(window, text='x = ',bg="grey",font=fontStyle,fg='white')


def move(x,y):
    result = 'x={} y= {}'.format(x, y)
    result_label.configure(text=result)



window.mainloop()