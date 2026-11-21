# Design Notes

- efficient way to be able to detect checks?
we could keep track of a state for the board/king
this way, theres a way to check if a move is illegal or not
^ i.e. piece is pinned to the king

- im having trouble deciding on how i can keep track of legal moves for each piece, 
i could have each piece have a set of its legal moves (which would also be o(1) to look for a grid in each piece's legal moves). 
I'm thinking that if a piece moves and is in a piece's legal moves set, then there will be some logic
^ (own piece = blocks, opponent piece, blocks/needs to capture)
- also if pinned to king

- Movement desicison will be made on the board, Pieces will only be for holding basic data, no inheritance
- Allowed Moves is way more difficult, keep a isSquareAttacked in the board, keep basic data to the Pieces still
