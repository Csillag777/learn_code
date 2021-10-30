import tkinter as tk

window = tk.Tk()
window.title('window')

def create_label(txt):
    lbl_1 = tk.Label(window, text=txt, bg='yellow', fg='#263238', font=('Arial', 12), width=100, height=10)
    lbl_1.grid(column=0, row=0)
create_label('Hello World !')
window.mainloop()