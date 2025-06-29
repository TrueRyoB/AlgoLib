//ABC407D
vector<int> possible_domino{0};
const int domino_vertical = (1U << W) + 1, domino_horizontal = 3;
for (int i=0, bit=0; i<H; ++i)
  for (int j=0; j<W; ++j, ++bit) {
      vector<int> tmp;
      for (const auto b : possible_domino) {
          if (j + 1 < W && !(b & domino_horizontal << bit)) tmp.emplace_back(b | domino_horizontal << bit);
          if (i + 1 < H && !(b & domino_vertical << bit)) tmp.emplace_back(b | domino_vertical << bit);
      }
      ranges::move(tmp, back_inserter(possible_domino));
  }
  //continue...
}
