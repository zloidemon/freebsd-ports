# New ports collection makefile for:	volumecontrol
# Date created:		2010-06-08
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	volumecontrol
PORTVERSION=	0.4
CATEGORIES=	audio
MASTER_SITES=	SF

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	VolumeControl is a audio mixer

USE_BZIP2=	yes
GNU_CONFIGURE=	yes

.include <bsd.port.pre.mk>

do-configure:
	cd ${WRKSRC}&&${SH} ${WRKSRC}/autogen.sh

.include <bsd.port.post.mk>
