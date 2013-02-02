# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD$

PORTNAME=	hyperdex
PORTVERSION=	0.4.0
CATEGORIES=	databases
MASTER_SITES=	http://hyperdex.org/src/

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Searchable distributed key-value store

LICENSE=	BSD

LIB_DEPENDS=	e:${PORTSDIR}/devel/libe \
		cityhash:${PORTSDIR}/devel/cityhash \
		glog:${PORTSDIR}/devel/glog \
		popt:${PORTSDIR}/devel/popt

RUN_DEPENDS=	devel/py-parsing

USE_LDCONFIG=	yes
USE_PYTHON=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib" \
		--enable-python-bindings

MAN1=	hyperdex-daemon.1 \
	hyperdex-replication-stress-test.1 \
	hyperdex-simple-consistency-stress-test.1

.include <bsd.port.pre.mk>
.include <bsd.port.post.mk>
