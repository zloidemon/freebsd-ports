# New ports collection makefile for:	grub2
# Date created:		2009-10-29
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	grub2
PORTVERSION=	1.97
CATEGORIES=	sysutils
MASTER_SITES=	ftp://alpha.gnu.org/gnu/grub/
DISTNAME=	grub-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	GRand Unified Bootloader

ONLY_FOR_ARCHS=	i386
USE_AUTOTOOLS=  autoconf:262 autoheader:262
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
CONFIGURE_TARGET=	--build=${MACHINE_ARCH}-freebsd-freebsd${OSREL}

USE_RUBY=	yes
USE_RUBY_VER=	18

.include <bsd.port.pre.mk>
pre-configure:
	@cd ${WRKSRC} && ${ACLOCAL}
	@cd ${WRKSRC} && ${RUBY} genmk.rb < conf\/*.rmk
	@cd ${WRKSRC} && ${REINPLACE_CMD} 's/\.conf/*.rmk/.mk/'
	${SH} ${WRKSRC}/gendistlist.sh > ${WRKSRC}/DISTLIST

.include <bsd.port.post.mk>
