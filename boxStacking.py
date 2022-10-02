class Box:
     
    # Representation of a box
    def __init__(self, h, w, d):
        self.h = h
        self.w = w
        self.d = d
 
    def __lt__(self, other):
        return self.d * self.w < other.d * other.w
 
def maxStackHeight(arr, n):
    rot = [Box(0, 0, 0) for _ in range(3 * n)]
    index = 0
 
    for i in range(n):
 
        # Copy the original box
        rot[index].h = arr[i].h
        rot[index].d = max(arr[i].d, arr[i].w)
        rot[index].w = min(arr[i].d, arr[i].w)
        index += 1
 
        # First rotation of the box
        rot[index].h = arr[i].w
        rot[index].d = max(arr[i].h, arr[i].d)
        rot[index].w = min(arr[i].h, arr[i].d)
        index += 1
 

        rot[index].h = arr[i].d
        rot[index].d = max(arr[i].h, arr[i].w)
        rot[index].w = min(arr[i].h, arr[i].w)
        index += 1
 

    n *= 3

    rot.sort(reverse = True)

    msh = [0] * n
 
    for i in range(n):
        msh[i] = rot[i].h

    for i in range(1, n):
        for j in range(0, i):
            if (rot[i].w < rot[j].w and
                rot[i].d < rot[j].d):
                if msh[i] < msh[j] + rot[i].h:
                    msh[i] = msh[j] + rot[i].h
 
    maxm = -1
    for i in range(n):
        maxm = max(maxm, msh[i])
 
    return maxm
 
# Driver Code
if __name__ == "__main__":
    arr = [Box(4, 6, 7), Box(1, 2, 3),
           Box(4, 5, 6), Box(10, 12, 32)]
    n = len(arr)
    print("The maximum possible height of stack is",
           maxStackHeight(arr, n))
