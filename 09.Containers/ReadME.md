(STL)The Standard Template Library Containers:
               /           \
              /             \
             /               \
            /                 \ 
           /                   \
     sequence         |        Asspciative
    countainer        |          countainer
(linear arrangement)  |      (provide fast retrieval of date based on keys)
<vector>              |       <set>
<deque>               |       <map>
<list>                |-----------------
<stack>               |key    | value  
                      |-----------------
                      |  1    | "Mark" 
                      |  2    | "Ali"      (search by key)



vector:
____________________
|___|____|____|_____----------->


deque:
         ______________________
<--------|_____|____|_____|____-------->

list:
          ____     _______    _____       _____
<------- |____|<-->|_____|<-->|____|<--> |____|-------->