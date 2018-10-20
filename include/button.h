#ifndef BUTTON_H
#define BUTTON_H

#include <QPushButton>

class Button : public QPushButton {
public:
  explicit Button(QWidget *parent);
  virtual ~Button() override;
};

#endif // BUTTON_H