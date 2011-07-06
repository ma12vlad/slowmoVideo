/*
This file is part of slowmoVideo.
Copyright (C) 2011  Simon A. Eugster (Granjow)  <simon.eu@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
*/

#ifndef SEGMENT_SV_H
#define SEGMENT_SV_H

#include "canvasObject_sV.h"

class Segment_sV : public CanvasObject_sV
{
public:
    Segment_sV(int index);
    ~Segment_sV() {}

    int leftNodeIndex() const;

private:
    int m_leftNodeIndex;
};

#endif // SEGMENT_SV_H