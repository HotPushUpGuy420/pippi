from .grains cimport GrainCloud

cdef double[:,:] _adsr(double[:,:] frames, int framelength, int channels, double samplerate, double attack, double decay, double sustain, double release) nogil

cdef class SoundBuffer:
    cdef public int samplerate
    cdef public int channels
    cdef public double[:,:] frames

    cdef SoundBuffer _cloud(SoundBuffer self, GrainCloud cloud, double length)
    cdef void _dub(SoundBuffer self, SoundBuffer sound, int framepos=*)
    cdef void _fill(SoundBuffer self, double[:,:] frames)
    cdef double[:,:] _speed(SoundBuffer self, double speed, int scheme)
    cpdef SoundBuffer adsr(SoundBuffer self, double a=*, double d=*, double s=*, double r=*)

cdef class RingBuffer:
    cdef public int length
    cdef public int samplerate
    cdef public int channels
    cdef public int write_head
    cdef public double[:,:] frames
    cdef double[:,:] copyout

    cdef double[:,:] _read(self, int length, int offset)
    cdef void _write(self, double[:,:] frames)
