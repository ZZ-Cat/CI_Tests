class CI_Tests {
public:
  CI_Tests();
  ~CI_Tests();
  bool begin();
  void run();

protected:
  uint32_t _testCount = 6;
}; // class CI_Tests
