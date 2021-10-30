import tkinter as tk

window = tk.Tk()
window.title('window')

def create_button(txt):
    bt_1 = tk.Button(window, text=txt, bg='red', fg='white', font=('Arial', 12))
    bt_1['width'] = 50
    bt_1['height'] = 4
    bt_1['activebackground'] = 'grey1'        
# 按鈕被按下的背景顏色

    bt_1['activeforeground'] = 'yellow'     
# 按鈕被按下的文字顏色 ( 前景 )


    bt_1.grid(column=0, row=0)

create_button('Button')

window.mainloop()