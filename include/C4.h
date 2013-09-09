/*
 * C4.h
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

#ifndef C4_H_
#define C4_H_

/*
 *
 */

template<class TValue, class TRowId, class TColumnId>
class C4 {

private:

	int _compactionInterval;

public:

	/**
	 * Creates a new column store
	 * @param compactionInterval The interval that the columnstore should be compacted
	 */
	explicit C4(int compactionInterval) :
			_compactionInterval(compactionInterval) {

	}

	/**
	 * Inserts or updates a new row including the corresponding column with a new value
	 *
	 * @param rowId The row identifier
	 * @param columnId The column identifier
	 * @param value The to be inserted/updated value
	 * @param ttl The time to live of the value
	 */
	void InsertOrUpdate(const TRowId rowId, const TColumnId columnId, const TValue* value,
			const int ttl = 0);


	bool Get(const TRowId rowId, const TColumnId columnId, TValue* outResult);

	void Tombstone(const TRowId rowId, const TColumnId columnId);

	void Tombstone(const TRowId rowId);

	void Compact();

	void TabulaRasa();

	void Save(const char* outputStream);

	void Load(const char* inputStream);

	void Shutdown();
};

#endif /* C4_H_ */
