#!/usr/bin/python
import unittest
from advancedmath import add, sub

class TestMath(unittest.TestCase):

    def test_add(self):
        self.assertEqual(3, add(1, 2))

    def test_add_fails_with_float_argument(self):
        with self.assertRaises(TypeError):
            add(1.1, 2)

    def test_sub(self):
        self.assertEqual(-1, sub(10, 11))

if __name__ == '__main__':
    unittest.main()
