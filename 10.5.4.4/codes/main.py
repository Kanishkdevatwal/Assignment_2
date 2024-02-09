import numpy as np
import matplotlib.pyplot as plt

# Load data from the values.dat file
file_path_y = 'values.dat'

# Define the y_n function to load values from the file
def y_n(n):
    return np.loadtxt(file_path_y)[max(0, n):min(n + 1, len(np.loadtxt(file_path_y)))]

# Generate n values from 0 to 48
n = np.arange(0, 48)  
y = np.array([y_n(n + 1) for n in n]) 

# Plot the graph for y(n)
stem = plt.stem(n, y, markerfmt='o', linefmt='b-', basefmt='r-')

highlighted_points = [34] 
highlighted_colors = ['r']  
for point, color in zip(highlighted_points, highlighted_colors):
    plt.plot([point], [y[point]], marker='o', markersize=8, color=color, linestyle='None', label=f'y({point})')

plt.title('Terms of y(n)')
plt.xlabel('n')
plt.ylabel('y(n)')
plt.grid(True)
plt.legend()
plt.savefig('fig1.png')
plt.show()
