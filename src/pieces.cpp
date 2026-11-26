#include "pieces.hpp"

// Pieces implementation

// Construtor
Piece::Piece(Color color, CapturedState state, Pieces type, int row, char col) :
     color_(color), currentState_(state), type_(type), row_(row), col_(col) {}

// setter operations
void Piece::setHasMoved() {
    hasMoved_ = true;
}

// getter operations
CapturedState Piece::currentState() const noexcept {
    return currentState_;
}
Pieces Piece::getPiece() const noexcept {
    return type_;
}

int Piece::row() const noexcept {
    return row_;
}

char Piece::col() const noexcept {
    return col_;
}

bool Piece::hasMoved() const noexcept {
    return hasMoved_;
}

// update the piece's position
void Piece::movePiece(int row, char col) {
    row_ = row;
    col_ = col;
}
