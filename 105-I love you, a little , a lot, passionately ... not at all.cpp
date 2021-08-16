std::string how_much_i_love_you(int nb_petals) {
  //another simple solution
  std::string arr[] = {"I love you", "a little", "a lot", "passionately", "madly", "not at all"};
    return arr[(nb_petals - 1) % 6];
  }
