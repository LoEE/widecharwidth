/* Special width values */
enum {
  codepoint_nonprint = -1,     // The character is not printable.
  codepoint_combining = -2,    // The character is a zero-width combiner.
  codepoint_ambiguous = -3,    // The character is East-Asian ambiguous width.
  codepoint_private_use = -4,  // The character is for private use.
  codepoint_unassigned = -5,   // The character is unassigned.
  codepoint_widened_in_9 = -6  // Width is 1 in Unicode 8, 2 in Unicode 9+.
};

int codepoint_width(int c);
