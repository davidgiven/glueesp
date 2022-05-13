OBJDIR = .obj

all: $(OBJDIR)/build.ninja
	(cd $(OBJDIR) && meson compile)

$(OBJDIR)/build.ninja:
	meson setup $(OBJDIR)

