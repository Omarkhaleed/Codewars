int combat(int health, int damage){
  if(health>damage)
  return health-damage;
  else
  return 0;
}
