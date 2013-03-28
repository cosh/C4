/*
 * KeyKeyValueStore.h
 *
 *  Created on: 25.03.2013
 *      Author: cosh
 *     Purpose:
 * 
 * Copyright (c) 2013 Henning Rauch
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of 
 * this software and associated documentation files (the "Software"), to deal in the 
 * Software without restriction, including without limitation the rights to use, copy, 
 * modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, 
 * and to permit persons to whom the Software is furnished to do so, subject to the 
 * following conditions:
 * The above copyright notice and this permission notice shall be included in all 
 * copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
 * PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT 
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION 
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

 */

#ifndef KEYKEYVALUESTORE_H_
#define KEYKEYVALUESTORE_H_

#include <ostream>
#include <istream>

/*
 *
 */
class KeyKeyValueStore {
public:

	explicit KeyKeyValueStore(int compactionInterval);

	void Create(const long rowId, const short columnId,
			const char* value, const int ttl = 0);

	const char * const Get(const long rowId, const short columnId);

	const int GetAsInteger(const long rowId, const short columnId);

	const double GetAsDouble(const long rowId, const short columnId);

	void Tombstone(const long rowId, const short columnId);

	void Tombstone(const long rowId);

	void Compact();

	void TabulaRasa();

	void Save(const std::ostream* outputStream);

	void Load(const std::istream* inputStream);

	void Shutdown();
};

#endif /* KEYKEYVALUESTORE_H_ */
