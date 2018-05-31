/* The MIT License (MIT)
 *
 * Copyright (c) 2014-2018 David Medina and Tim Warburton
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 */
#ifndef OCCA_TESTS_PARSER_MODES_OKL_HEADER
#define OCCA_TESTS_PARSER_MODES_OKL_HEADER

#include <vector>

#include "statement.hpp"

namespace occa {
  namespace lang {
    class leftUnaryOpNode;
    class rightUnaryOpNode;
    class binaryOpNode;

    namespace okl {
      bool checkKernels(statement_t &root);

      bool checkKernel(statement_t &kernelSmnt);

      //---[ Declaration ]--------------
      bool checkLoops(statement_t &kernelSmnt);

      bool checkForDeclarations(statement_t &kernelSmnt,
                                statementPtrVector &forSmnts,
                                const std::string &attrName);

      bool isSimpleForSmnt(const std::string &attrName,
                           forStatement &forSmnt);

      bool isSimpleForSmnt(const std::string &attrName,
                           forStatement &forSmnt,
                           variable_t *&iter);

      bool isSimpleForInit(const std::string &attrName,
                           statement_t &smnt);

      bool isSimpleForCheck(const std::string &attrName,
                            variable_t &var,
                            statement_t &smnt);

      bool isSimpleForUpdate(const std::string &attrName,
                             variable_t &var,
                             statement_t &smnt);

      bool hasSameVariable(variable_t &var,
                           leftUnaryOpNode &opNode);

      bool hasSameVariable(variable_t &var,
                           rightUnaryOpNode &opNode);

      int hasSameVariable(variable_t &var,
                          binaryOpNode &opNode);
      //================================

      //---[ Loop Logic ]---------------
      bool oklLoopMatcher(statement_t &smnt);
      bool oklLoopAndTypeDeclMatcher(statement_t &smnt);
      bool oklLoopAndTypeExprMatcher(statement_t &smnt);
      //================================

      // bool testSharedAndExclusive();
      // bool testBreakAndContinue();
    }
  }
}

#endif
