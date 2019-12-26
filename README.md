# complex_number
This is a project for the complex number field. 
radius,norm,angle, polar representation are available

## 1. Introduction to Complex Number
if z is a complex number, then it can be written as 
   z = a+bi = radius*(cos(angle)+sin(angle)*i) 
     = radius*(exp(i*arctan(b/a))

## 2. How to use?
1) printing out
```c++
complexnumber z1(2, 1);
cout<<z1<<endl;
```
2) addition
```c++
complexnumber z1(2,1);
complexnumber z2(3,1);
complexnumber z3(z1+z2);
cout<<z3<<endl;
```
3) multiplication/division
```c++
complexnumber z4(z1*z2);
cout<<z4<<endl;
complexnumber z5(z1/z2);
```

4) norm/radius/angle :return double
```c++
z1.norm();
z1.radius();
z1.angle();
```

5) polar representation
it directly print the result
```c++
z1.polarform();
```
6) comparison among other complex numbers are possible. : for z1, z2 , if z2 's norm is greater, then z1<z2 
example)bubble sort( defined generic function for this)
```c++
template<typename T>
void bubble_sort(T begin,T end){
//passing two pointers of iterators
   T i,j;
   for(i=begin;i!=end;i++){
      for(j=begin;j!=end;j++){
         if(*i<*j){
            std::swap(*i,*j);}
            }
        }
 }
 // Then defining an dynamic array contains several complexnumbers
 vector<complexnumbers> vec;
 vec.push_back(z1);
 vec.push_back(z2);
 vec.push_back(z3);
 bubble_sort(vec.begin(),vec,end()); // then generic function will automatically interpret this, as a function passing two pointers
 // now, let's see the result
 for(auto it=vec.begin();it!=vec.end();it++){
      cout<<*it<<endl;  //this is possible, since outputstream's << operator was overloaded
      }
