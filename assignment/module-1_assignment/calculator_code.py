Python 3.12.4 (tags/v3.12.4:8e8a4ba, Jun  6 2024, 19:30:16) [MSC v.1940 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
import tkinter as tk
... 
... def click(button_text):
...     if button_text == "=":
...         try:
...             result = eval(entry.get())
...             entry.delete(0, tk.END)
...             entry.insert(tk.END, str(result))
...         except:
...             entry.delete(0, tk.END)
...             entry.insert(tk.END, "Error")
...     elif button_text == "C":
...         entry.delete(0, tk.END)
...     else:
...         entry.insert(tk.END, button_text)
... 
... root = tk.Tk()
... root.title("Simple Calculator")
... 
... entry = tk.Entry(root, width=20, font=("Arial", 18), borderwidth=5)
... entry.grid(row=0, column=0, columnspan=4)
... 
... buttons = [
...     "7", "8", "9", "/",
...     "4", "5", "6", "*",
...     "1", "2", "3", "-",
...     "0", ".", "=", "+",
...     "C"
... ]
... 
... row, col = 1, 0
... for btn in buttons:
...     tk.Button(root, text=btn, width=5, height=2, font=("Arial", 14),
...               command=lambda b=btn: click(b)).grid(row=row, column=col)
...     col += 1
...     if col > 3:
...         col = 0
...         row += 1
... 
... root.mainloop()
