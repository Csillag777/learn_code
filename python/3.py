import tkinter as tk
from tkinter.constants import TOP
from typing import Sized
from PIL import Image, ImageTk
import tkinter.font as tkFont
from tkinter import ttk
from tkinter import messagebox
window = tk.Tk()
window.title('dash borad test')
window.geometry('800x600')
window.configure(background='grey')

align_mode = 'nswe'
pad = 5
fontStyle = tkFont.Font(family="Lucida Grande", size=20)

def show():
    
    result = 'hello world'
    result_label.configure(text=result)
def alert():
    messagebox.showinfo("Basic Example", "a Basic Tk MessageBox")


fontStyle1 = tkFont.Font(family="Lucida Grande", size=20)
div1 = tk.Label(window, text='Dash Board',bg="grey",font=fontStyle,fg='white')
div1.pack(side = tk.TOP)

result_label = tk.Label(window,bg="grey",font=fontStyle,fg='white')
result_label.pack()


div2 = tk.Button(window, text="hello",bg="orange",font=fontStyle,command=show)
div2.pack(side = tk.TOP)

labelTop = tk.Label(window,text = "Choose your favourite month",bg="grey",font=fontStyle,fg='white')
labelTop.pack(side = tk.TOP)

comboExample = ttk.Combobox(window, 
                            values=[
                                    "January", 
                                    "February",
                                    "March",
                                    "April"])
print(dict(comboExample)) 
comboExample.pack(side = tk.TOP)
comboExample.current(1)

print(comboExample.current(), comboExample.get())

div3 = tk.Button(window, text="alert",bg="yellow",command=alert)
div3.pack(side = tk.TOP)
#result_label.grid(column=0, row=2, padx=pad, pady=pad, sticky=align_mode)

window.mainloop()