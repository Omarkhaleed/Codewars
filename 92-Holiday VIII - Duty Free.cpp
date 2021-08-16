int duty_free(int price, int discount, int holiday_cost) {
  return holiday_cost / (price * discount / 100.0);
}
