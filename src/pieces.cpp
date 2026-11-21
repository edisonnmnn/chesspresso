#include "pieces.hpp"

// Pieces implementation

// Construtor
Piece::Piece(Color color, CapturedState state, int row, char col) :
     color_(color), currentState_(state), row_(row), col_(col) {}

// setter operations
void Piece::setHasMoved() {
    hasMoved_ = true;
}

// getter operations
CapturedState Piece::currentState() const noexcept {
    return currentState_;
}
