# New ports collection makefile for:	grub2
# Date created:		2009-10-29
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	grub2
PORTVERSION=	1.98
CATEGORIES=	sysutils
MASTER_SITES=	ftp://alpha.gnu.org/gnu/grub/
DISTNAME=	grub-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	GRand Unified Bootloader

BUILD_DEPENDS=	bison:${PORTSDIR}/devel/bison

ONLY_FOR_ARCHS=	i386 amd64
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GETTEXT=	yes
CONFIGURE_ENV=	CPPFLAGS="-I/${LOCALBASE}/include" \
		LDFLAGS="-L/${LOCALBASE}/lib"

INFO=	grub
MAN1=	grub-mkimage.1 \
	grub-mkelfimage.1 \
	grub-fstest.1 \
	grub-mkisofs.1 \
	grub-mkfont.1 \
	grub-mkrelpath.1 \
	grub-bin2h.1 \
	grub-script-check.1 \
	grub-editenv.1 \
	grub-mkpasswd-pbkdf2.1 \
	grub-mkrescue.1
MAN8=	grub-setup.8 \
	grub-mkdevicemap.8 \
	grub-probe.8 \
	grub-install.8 \
	grub-mkconfig.8 \
	grub-set-default.8 \
	grub-reboot.8

OPTIONS=	DEBUG	"Include memory manager debugging" off \
		EFIEMU	"efiemu runtimes (only i386)" off

.include <bsd.port.pre.mk>

.if !defined(WITHOUT_DEBUG)
CONFIGURE_ARGS+=	--enable-mm-debug
.endif

.if !defined(WITHOUT_EFIEMU)
.if ${ARCH} == "amd64"
BROKEN=		efiemu runtimes is not support for amd64
.else
CONFIGURE_ARGS+==	--enable-efiemu
.endif
.endif

.include <bsd.port.post.mk>
