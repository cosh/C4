/*
 * KeyKeyValueStore.cpp
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

#include "KeyKeyValueStore.h"

template <class T>
void KeyKeyValueStore<T>::Create(const long rowId, const short columnId,
		const T* value, const int ttl) {
}

template <class T>
const T* const KeyKeyValueStore<T>::Get(const long rowId,
		const short columnId) {

	return 0;
}

template <class T>
void KeyKeyValueStore<T>::Tombstone(const long rowId, const short columnId) {
}

template <class T>
void KeyKeyValueStore<T>::Tombstone(const long rowId) {
}

template <class T>
void KeyKeyValueStore<T>::Compact() {
}

template <class T>
void KeyKeyValueStore<T>::TabulaRasa() {
}

template <class T>
void KeyKeyValueStore<T>::Save(const char* path) {
}

template <class T>
void KeyKeyValueStore<T>::Load(const char* inputStream) {
}

template <class T>
void KeyKeyValueStore<T>::Shutdown() {
}
