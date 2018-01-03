#include <ApplicationServices/ApplicationServices.h>

int main(int argc, char* argv[]) {
  (void) argc;
  (void) argv;

  auto id = CGMainDisplayID();
  auto height = CGDisplayPixelsHigh(id);
  auto width = CGDisplayPixelsWide(id);
  auto p = CGPoint{
    .x = width / 2.0,
    .y = height / 2.0
  };
  CGDisplayMoveCursorToPoint(id, p);

  return 0;
}
