#include <iostream>
#include <map>
using namespace std;

int main()
{
  // example of the map in C++
  map<int, string> myMap;      // Change int to string for the value type
  myMap[1] = "Ashutosh Kumar"; // Assigning a string value to the key 1
  // cout << myMap[1] << endl;
  // to insert the new key value we have to use the insert methods and also we need to be make a pair

  myMap.insert(make_pair(2, "rahul singh"));
  // cout << myMap[2] << endl;
  // we can iterate the map 
  cout<<"Iterate  over the map "<<endl;
  
  for (auto pair: myMap)
  {
    cout<<pair.first<<pair.second<<endl;
  }
  
  return 0;
}



/*
 map  in the cpp
 map is classify in to two parts
  order map and unordered map
  in ordered map data is store in the key values paris , in the increasing  order
  map<key , value > myMap ;
  time complexity of the insertion in the map  is o(1)
   all the keys of the map is the unique  in nature
   if we want to insert the new key value in the map then we have to make the pairs then insert it

  map is also know as the associative map and hash map

  🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️
   red black tree is internally implemented by the the help of the red black tree
   red black properties -> every node of the tree is the either red or black in color
   root node is always a  black
   leaf node every leaf node is nill
   red property -> if red node has children then it must be  always black in color
   black depth properties ->


   ⭐⭐⭐⭐⭐ map methods 
   1.empty() : this method will check
   2.myMap.at(2) : access the values at index : 2 
   3.myMap.clear(): this methods clear all the  data of the  map 
   4.myMap.size() : total number of the elements  this will give the total size of the map 
   5. iterator : we forwarding and backward iterator 
   6 myMap.find() : this will give the iterator of that index point 
   7.myMap.erase () this function is use to remove the data from the  map 
   
*/