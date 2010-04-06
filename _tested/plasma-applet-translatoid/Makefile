# New ports collection makefile for:	plasma-applet-translatoid
# Date created:		2009-12-09
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	translatoid
PORTVERSION=	1.1
CATEGORIES=	deskutils
MASTER_SITES=	http://thecorpo.fr/sacha/translatoid/
PKGNAMEPREFIX=	plasma-applet-
DISTNAME=	${PORTNAME}1-1

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Translator using google translator

LIB_DEPENDS=	qjson.0:${PORTSDIR}/devel/qjson

USE_CMAKE=	yes
USE_KDE4=	automoc4 kdeprefix kdelibs
USE_QT_VER=	4
QT_COMPONENTS=	gui dbus network opengl svg phonon webkit xml \
		qmake_build moc_build rcc_build uic_build

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

.include <bsd.port.mk>
