
#include <bits/stdc++.h>
using namespace std ; 
 
struct Song {
  string artis ; 
  string title  ; 
  Song(const std::string &a  , const std::string &t) : artis(a) , title(t) {

    std::cout << "Song create  : " << title <<endl ; 
  }

} ; 
int main() {
 
  std::vector<std::unique_ptr<Song>>  song ; 
  song.push_back(std::make_unique<Song> ("luka" , "Luk")) ; 
  song.push_back(std::make_unique<Song> ("huuus"  ,"uhs ")) ; 


  for (const auto& songs : song ) {
    std::cout <<"artis : " << songs -> artis << "title " << songs  -> title <<endl ; 

  }
  return 0 ; 
}
# vector
