T = int(input())

while T > 0 :
    T-=1
    N = int(input())
    max = -1
    school = ""    
    for i in range(N) :
        name, num = str(input()).split()
        if(int(num) > max):
            max=int(num)
            school = name
    print(school)