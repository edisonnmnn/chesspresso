#pragma once
    
#include <set>

// Chess Pieces
enum class ChessPieces { Pawn, Knight, Bishop, Rook, Queen, King };

// Piece State
enum class CapturedState { Alive, Dead };

// Piece Color
enum class Color { White, Black };

// Pieces
// Each Piece has the following attributes:
// Type (Bishop, Rook, Pawn) 
// Rules the type can follow
// Color (Black, White)
// Captured (Alive, Dead)
// Position on board (letter, number)
// hasMoved (for special moves)
//
// Each Piece has the following actions:
// Move: Piece moves based off of its class and also if it is blocked
// Quiet Move: move to an empty space if board permits
// Capture: moves onto an enemy piece, overtaking the enemy piece's square
class Piece {
public:
    explicit Piece(Color color, CapturedState state, int row, char col);
    ~Piece() = default;
    
    // setter operations
    void setHasMoved();

    // getter operations
    CapturedState currentState() const noexcept;
    int row() const noexcept; 
    char col() const noexcept; 
    bool hasMoved() const noexcept;

    // shared operations
    // quiet move
    void movePiece(int row, char col);

    // design: legality should be the actual game/board's decision, pieces just need to move
    // legal move
    // - out of bounds
    // - blocked by another piece (opponents or your own)
    // - pins
    //
 
protected:
    Color color_;
    CapturedState currentState_;
    int row_;
    char col_;
    bool hasMoved_{false};

};

// Type: Pawn
// Movement: Only Straight Forward One Space
// Special: Double step from its starting rank (cannot jump)
// Special: Diagonal to capture
// Special: En passant (depends on game history)
// Special: Promotion
class Pawn : public Piece {
public:
    explicit Pawn(Color color, CapturedState state, int row, char col) :
        Piece(color, state, row, col) {}

private:
    
};

// Type: Knight
// Movement: Moves in an L shape: two squares one direction, one square perpendicular
// Special: Can Jump

// Type: Bishop
// Movement: Moves diagonally 

// Type: Rook
// Movement: Horizontally and vertically
// Special: Castle with King (depends on game history)

// Type: Queen
// Movement: Horizontal, vertical, diagonal

// Type: King
// Movement: One square in any direction
// Special: Cannot move into a square that will put it in danger
// Special: Castle with Rook (depends onj game history)
// Special: Check/Checkmate, King will never be captured
