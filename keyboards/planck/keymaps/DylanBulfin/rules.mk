ifeq ($(strip $(AUDIO_ENABLE)), yes)
    SRC += muse.c
endif

SRC += features/achordion.c
